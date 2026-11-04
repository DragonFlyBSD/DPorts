PORTNAME=  quest
DISTVERSION=   4.3.0
CATEGORIES= science

MAINTAINER= mbzadegan@gmail.con
COMMENT= high-performance quantum computer simulator
WWW= https://github.com/QuEST-Kit/QuEST

LICENSE= MIT
LICENSE_FILE= ${WRKSRC}/LICENCE.txt

USES=   cmake compiler:c++17-lang

USE_GITHUB= yes
GH_ACCOUNT= QuEST-Kit
GH_PROJECT= QuEST
GH_TAGNAME= v${DISTVERSION}

CMAKE_ON=    QUEST_ENABLE_OMP
CMAKE_OFF=   QUEST_ENABLE_MPI \
	QUEST_ENABLE_CUDA \
	QUEST_BUILD_EXAMPLES


.include <bsd.port.mk>
