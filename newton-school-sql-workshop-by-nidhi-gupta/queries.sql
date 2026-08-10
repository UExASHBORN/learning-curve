-- 1. All records
SELECT * FROM amazon_data LIMIT 10;

-- 2. Selected columns only 
SELECT order_id, product_name, order_value 
FROM amazon_data;

-- 3. Highest order value
SELECT * FROM amazon_data 
ORDER BY CAST(order_value AS NUMERIC) DESC 
LIMIT 1;

-- 4. List orders where quantity > 2
SELECT * FROM amazon_data 
WHERE CAST(quantity AS INTEGER) > 2;

-- 5. First five orders from Mumbai
SELECT * FROM amazon_data 
WHERE customer_city = 'Mumbai'
ORDER BY order_time ASC 
LIMIT 5;

-- 6. List all orders paid as COD
SELECT * FROM amazon_data 
WHERE payment_method = 'Cash on Delivery';

-- 7. Total revenue from all given orders 
SELECT SUM(CAST(order_value AS NUMERIC)) AS total_revenue 
FROM amazon_data 
WHERE order_status = 'Delivered';

-- 8. Average order value across all orders
SELECT AVG(CAST(order_value AS NUMERIC)) AS avg_order_value 
FROM amazon_data;

-- 9. Number of total delivered orders
SELECT COUNT(order_id) AS total_delivered 
FROM amazon_data 
WHERE order_status = 'Delivered';

-- 10. Which payment method is used the most
SELECT payment_method, COUNT(order_id) AS order_count 
FROM amazon_data 
GROUP BY payment_method 
ORDER BY order_count DESC 
LIMIT 1;

-- 11. Top peak demand periods
SELECT timeframe, COUNT(order_id) AS order_count 
FROM amazon_data 
GROUP BY timeframe 
ORDER BY order_count DESC;

-- 12. Which category in this time frame is most popular
SELECT timeframe, category, COUNT(order_id) AS order_count 
FROM amazon_data 
GROUP BY timeframe, category 
ORDER BY order_count DESC;

-- 13. In these timeframes, which seller state is popular
SELECT timeframe, seller_state, COUNT(order_id) AS order_count 
FROM amazon_data 
GROUP BY timeframe, seller_state 
ORDER BY order_count DESC;k
