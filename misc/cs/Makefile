# Created by: ijliao
# $FreeBSD: misc/cs/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	cs
PORTVERSION=	0.9.5
PORTREVISION=	2
CATEGORIES=	misc
MASTER_SITES=	http://njhurst.org/programming/cross-stitch/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	pav
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cross Stitch software

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/PIL/Image.py:${PORTSDIR}/graphics/py-imaging

USE_PYTHON=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/xs

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s,/usr/bin/python,${SETENV} python," ${WRKSRC}/xs.py

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/xs.py ${PREFIX}/bin/xs

.include <bsd.port.mk>
