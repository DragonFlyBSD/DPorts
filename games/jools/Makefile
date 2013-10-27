# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: games/jools/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	jools
PORTVERSION=	0.20
PORTREVISION=	7
CATEGORIES=	games
MASTER_SITES=	http://pessimization.com/software/jools/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Addictive jewel-swapping puzzle game

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pygame/__init__.py:${PORTSDIR}/devel/py-game

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
post-patch:
	@${FIND} ${WRKSRC} -name ".arch-ids" | ${XARGS} ${RM} -r

.include <bsd.port.mk>
