#include "calendar.h"
#include <QPainter>

Calendar::Calendar(QWidget *parent)
    : QCalendarWidget(parent)
{
}

void Calendar::setDateColor(const QDate &date, const QColor &color) {
    customDateColors[date] = color;
    updateCell(date);
}

void Calendar::clearCustomDates() {
    customDateColors.clear();
    update();
}

void Calendar::paintCell(QPainter *painter, const QRect &rect, QDate date) const {
    QCalendarWidget::paintCell(painter, rect, date);

    if (customDateColors.contains(date)) {
        QColor color = customDateColors.value(date);
        painter->save();
        painter->setBrush(QBrush(color));
        painter->setOpacity(0.4);
        painter->setPen(Qt::NoPen);
        painter->drawRect(rect);
        painter->restore();
    }
}
