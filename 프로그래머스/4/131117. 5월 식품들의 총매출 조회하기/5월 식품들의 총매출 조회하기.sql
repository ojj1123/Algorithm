SELECT p.PRODUCT_ID as PRODUCT_ID, p.PRODUCT_NAME as PRODUCT_NAME, (p.PRICE * SUM(o.AMOUNT)) as TOTAL_SALES
FROM FOOD_PRODUCT p INNER JOIN FOOD_ORDER o ON p.PRODUCT_ID = o.PRODUCT_ID
WHERE o.PRODUCE_DATE IS NOT NULL AND SUBSTR(o.PRODUCE_DATE, 1, 7) = '2022-05'
GROUP BY PRODUCT_ID
ORDER BY TOTAL_SALES DESC, PRODUCT_ID;