

#include "BattleBuilding.h"
#include "GameUtil.h"

CCBattleBuilding::CCBattleBuilding()
:isEnemy(false)
,isDying(false)
,isCastle(false)
,fSpeed(0)
,fRange(480)
,nDamage(2)
,nHP(1000)
,nOriginHP(1000)
{
}

CCBattleBuilding::~CCBattleBuilding()
{
}

CCBattleBuilding* CCBattleBuilding::create(const char *pszFileName)
{
    CCBattleBuilding *pobSprite = new CCBattleBuilding();
    if (pobSprite && pobSprite->initWithFile(pszFileName))
    {
        pobSprite->autorelease();
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

bool CCBattleBuilding::initWithFile(const char *pszFilename)
{
    if( CCSprite::initWithFile(pszFilename) == false) return false;
    
    
    
    return true;
}


void CCBattleBuilding::setDamage(int nDamage)
{
    nHP -= nDamage;
    
    if(nHP <= 0)
    {
        nHP = 0;
        isDying = true;
    }
}


float CCBattleBuilding::positionX()
{
    float fX = this->getPositionX();
    CCSize size = this->getContentSize();
    
    if(isEnemy) fX -= size.width/2;
    else fX += size.width/2;
    
    return fX;
}
























