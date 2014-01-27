# Created by: Mikhail T. <m.tsatsenko@gmail.com>
# $FreeBSD: devel/pyst/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pyst
PORTVERSION=	0.4.38
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/pyst/${PORTVERSION}

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Python interface to allow Asterisk programming

LICENSE=	LGPL21 PSFL
LICENSE_COMB=	dual

USE_PYTHON=	2
USE_PYDISTUTILS=	yes

PORTDOCS=	README README.html ChangeLog

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	@${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
