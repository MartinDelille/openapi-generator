/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "PFXTag.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "PFXHelpers.h"

namespace test_namespace {

PFXTag::PFXTag(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

PFXTag::PFXTag() {
    this->initializeModel();
}

PFXTag::~PFXTag() {

}

void
PFXTag::initializeModel() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_name_isSet = false;
    m_name_isValid = false;
    
}

void
PFXTag::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
PFXTag::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::test_namespace::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
    
    m_name_isValid = ::test_namespace::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
    
}

QString
PFXTag::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
PFXTag::asJsonObject() const {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert(QString("id"), ::test_namespace::toJsonValue(id));
    }
    if(m_name_isSet){
        obj.insert(QString("name"), ::test_namespace::toJsonValue(name));
    }
    return obj;
}


qint64
PFXTag::getId() const {
    return id;
}
void
PFXTag::setId(const qint64 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
PFXTag::getName() const {
    return name;
}
void
PFXTag::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
PFXTag::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
PFXTag::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

}

