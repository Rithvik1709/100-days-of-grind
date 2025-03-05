# Day 16 - k-Nearest Neighbors (kNN)

## 📝 Overview
k-Nearest Neighbors (kNN) is a simple and powerful non-parametric machine learning algorithm used for classification and regression.

## 📌 Topics Covered
- kNN for Classification
- kNN for Regression
- Choosing the Optimal **k** Value
- Distance Metrics: Euclidean, Manhattan, Minkowski

## 📂 Files
- `dataset.csv` - Sample dataset.
- `knn_classification.py` - Implements kNN for classification.
- `knn_regression.py` - Implements kNN for regression.

## 🔑 How kNN Works:
1. Select the number of neighbors **k**.
2. Calculate the distance between the new data point and all existing data points.
3. Choose the **k** closest points.
4. **For Classification**: Assign the most common class.
5. **For Regression**: Compute the average value of **k** neighbors.

## 📊 Distance Metrics:
| Metric | Equation | Use Case |
|--------|----------|----------|
| **Euclidean** | \( d = \sqrt{\sum (x_i - y_i)^2} \) | General continuous data |
| **Manhattan** | \( d = \sum |x_i - y_i| \) | Grid-based distance |
| **Minkowski** | \( d = \left( \sum |x_i - y_i|^p \right)^{1/p} \) | Generalized distance |

## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python knn_classification.py
python knn_regression.py
