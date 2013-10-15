# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: textproc/yould/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	yould
PORTVERSION=	0.3.7
CATEGORIES=	textproc
MASTER_SITES=	CHEESESHOP/source/y/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pronounceable word generator

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
NO_STAGE=	yes
PYDISTUTILS_INSTALLARGS=-Z -O 1 -N -S ${PYTHON_SITELIBDIR} ${WRKSRC}/dist/${PYEASYINSTALL_EGG}
PORTDOCS=	NEWS.txt README.txt

.ifndef NOPORTDOCS
post-install:
	@${INSTALL} -d ${DOCSDIR}/
	@cd ${WRKSRC}/&&${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
