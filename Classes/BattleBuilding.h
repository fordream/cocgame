

#ifndef __COC__BattleBuilding__
#define __COC__BattleBuilding__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBattleBuilding : public CCSprite
{
public:
    static CCBattleBuilding* create(const char *pszFileName);
    
public:
    bool isCastle;
    bool isEnemy;
    bool isDying;
    float fSpeed;
    float fRange;
    int nDamage;
    int nHP;
    int nOriginHP;
    
public:
    CCBattleBuilding();
    virtual ~CCBattleBuilding();
    
    virtual bool initWithFile(const char *pszFilename);
    float positionX();
    void setDamage(int nDamage);
};


#endif
