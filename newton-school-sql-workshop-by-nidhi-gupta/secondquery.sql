-- SELECT * FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv;


-- selected columns only 
-- SELECT order_id, product_name, order_value from amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv

-- highest order value
-- SELECT * FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- order BY order_value DESC LIMIT 1

-- list order where quantiry > 2
-- SELECT * FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv WHERE quantity > 2;

-- first five orders from mumbai
-- SELECT * FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- WHERE customer_city='Mumbai'
-- ORDER BY order_time ASC
-- limit 5



-- list all the order paid as COD
-- SELECT * FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- WHERE payment_method='Cash on Delivery'



-- total revnue from all given orders 
-- SELECT sum(order_value) FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- where order_status = 'Delivered'


-- average order value accross all orders
-- SELECT avg(order_value) FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv



-- number of total delivered order
-- SELECT COUNT(order_id) FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- WHERE order_status='Delivered'


-- which order method is used the most
-- SELECT payment_method, COUNT(order_id) AS order_count from amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- GROUP BY payment_method
-- order by count(order_id) DESC
-- LIMIT 1


-- top 5 peak demand period
-- SELECT timeframe, COUNT(order_id) AS order_count from amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- GROUP BY timeframe
-- order by count(order_id) DESC


-- which category in this time frame is most popular
-- SELECT timeframe, category, COUNT(order_id) AS order_count from amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
-- GROUP BY timeframe, category
-- order by count(order_id) DESC


-- in these timeframe which seller satte is popiular
SELECT timeframe, seller_state, COUNT(order_id ) AS order_count FROM amazon_seller_sql_workshop_datasetamazon_seller_sql_workshop_datasetcsv
GROUP BY timeframe, seller_state
ORDER BY count(order_id ) DESC;
