WITH SeatPairs AS (
    SELECT
        s1.id AS id1, s1.student AS student1,
        s2.id AS id2, s2.student AS student2
    FROM
        Seat s1
    LEFT JOIN
        Seat s2
    ON
        s1.id = s2.id - 1
    WHERE
        s1.id % 2 = 1
)
SELECT
    CASE
        WHEN sp.id2 IS NOT NULL THEN sp.id2
        ELSE sp.id1
    END AS id,
    CASE
        WHEN sp.id2 IS NOT NULL THEN sp.student1
        ELSE sp.student1
    END AS student
FROM
    SeatPairs sp
UNION ALL
SELECT
    CASE
        WHEN sp.id2 IS NOT NULL THEN sp.id1
        ELSE sp.id2
    END AS id,
    CASE
        WHEN sp.id2 IS NOT NULL THEN sp.student2
        ELSE sp.student2
    END AS student
FROM
    SeatPairs sp
WHERE
    sp.id2 IS NOT NULL
ORDER BY id;
