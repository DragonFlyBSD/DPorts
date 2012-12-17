# Created by: Hye-Shik Chang
# $FreeBSD: ports/irc/py-irc/Makefile,v 1.1 2012/11/22 11:25:35 svnexp Exp $

PORTNAME=	irc
PORTVERSION=	5.0.1
CATEGORIES=	irc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	william88@gmail.com
COMMENT=	IRC protocol client library for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes

BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}hgtools>0:${PORTSDIR}/devel/py-hgtools

EXAMPLEFILES=	irccat.py irccat2.py servermap.py testbot.py \
		dccreceive.py dccsend.py
EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MEXAMPLES}
post-install:
	@${MKDIR} ${EXAMPLESDIR}
.for file in ${EXAMPLEFILES}
	@${INSTALL_SCRIPT} ${WRKSRC}/scripts/${file} ${EXAMPLESDIR}/
.endfor
.endif

.if ${PYTHON_REL} < 270
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}importlib>0:${PORTSDIR}/devel/py-importlib
.endif

.include <bsd.port.post.mk>
