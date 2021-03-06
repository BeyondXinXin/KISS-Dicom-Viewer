﻿#ifndef EXTRAFILTERSPLUGIN_H
#define EXTRAFILTERSPLUGIN_H

#include <../kiss-dicom-viewer/src/engine/PluganInterface.h>

#include <QImage>
#include <QObject>
#include <QStringList>
#include <QtPlugin>

class pretreatmentFiltersPlugin : public QObject, public PretreatmentInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "kissdicomviewer_PretreatmentInterface" FILE "pretreatmentfiltersplugin.json")
    Q_INTERFACES(PretreatmentInterface)

public:
    QStringList GetPretreatments() const override;
    Pretreatmen PretreatmentFun(const QString & str) override;
};

#endif
