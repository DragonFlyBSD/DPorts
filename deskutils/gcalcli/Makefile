# Created by: ijliao
# $FreeBSD: deskutils/gcalcli/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gcalcli
PORTVERSION=	2.1
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
EXTRACT_SUFX=	.tgz

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Google Calendar Command Line Interface

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/gdata/__init__.py:${PORTSDIR}/devel/py-gdata \
		${PYTHON_PKGNAMEPREFIX}dateutil>=0:${PORTSDIR}/devel/py-dateutil \
		${PYTHON_PKGNAMEPREFIX}vobject>=0.4.8:${PORTSDIR}/deskutils/py-vobject

USE_PYTHON=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/gcalcli

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s,/usr/bin/python2,${SETENV} python," ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
