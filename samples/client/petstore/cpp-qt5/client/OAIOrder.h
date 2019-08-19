/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOrder.h
 *
 * An order for a pets from the pet store
 */

#pragma once

#include <QJsonObject>


#include <QDateTime>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIOrder: public OAIObject {
public:
    OAIOrder();
    OAIOrder(QString json);
    ~OAIOrder() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    qint64 getId() const;
    void setId(const qint64 &id);

    
    qint64 getPetId() const;
    void setPetId(const qint64 &pet_id);

    
    qint32 getQuantity() const;
    void setQuantity(const qint32 &quantity);

    
    QDateTime getShipDate() const;
    void setShipDate(const QDateTime &ship_date);

    
    QString getStatus() const;
    void setStatus(const QString &status);

    
    bool isComplete() const;
    void setComplete(const bool &complete);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    qint64 id;
    bool m_id_isSet;
    bool m_id_isValid;
    
    qint64 pet_id;
    bool m_pet_id_isSet;
    bool m_pet_id_isValid;
    
    qint32 quantity;
    bool m_quantity_isSet;
    bool m_quantity_isValid;
    
    QDateTime ship_date;
    bool m_ship_date_isSet;
    bool m_ship_date_isValid;
    
    QString status;
    bool m_status_isSet;
    bool m_status_isValid;
    
    bool complete;
    bool m_complete_isSet;
    bool m_complete_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIOrder)

