# Day 14 - Ensemble Learning: Random Forest & Gradient Boosting

## 📝 Overview
Ensemble learning combines multiple models to improve performance.  
- **Random Forest**: Uses bagging (Bootstrap Aggregation) to combine multiple decision trees.  
- **Gradient Boosting**: Sequentially improves weak models by minimizing errors iteratively.  

## 📌 Topics Covered
- Random Forest (Classification & Regression)
- Gradient Boosting (Classification & Regression)
- Performance Comparison

## 📂 Files
- `dataset.csv` - Sample dataset.
- `random_forest_classification.py` - Implements Random Forest for classification.
- `random_forest_regression.py` - Implements Random Forest for regression.
- `gradient_boosting_classification.py` - Implements Gradient Boosting for classification.
- `gradient_boosting_regression.py` - Implements Gradient Boosting for regression.

## 📊 Comparison of Random Forest & Gradient Boosting
| Algorithm         | Type       | Strengths | Weaknesses |
|------------------|-----------|------------|------------|
| **Random Forest** | Bagging   | Less prone to overfitting, runs in parallel | Less accurate on complex data |
| **Gradient Boosting** | Boosting | High accuracy, reduces bias | Prone to overfitting, slower |

## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python random_forest_classification.py
python random_forest_regression.py
python gradient_boosting_classification.py
python gradient_boosting_regression.py
