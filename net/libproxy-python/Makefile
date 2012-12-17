# New ports collection makefile for:	libproxy-python
# Date created:		11 Januari 2011
# Whom:			Koop Mast <kwm@FreeBSD.org>
#
# $FreeBSD: ports/net/libproxy-python/Makefile,v 1.2 2012/11/17 06:00:05 svnexp Exp $
#    $MCom: ports/net/libproxy-python/Makefile,v 1.1 2011/01/12 13:10:54 kwm Exp $

PORTREVISION=	0
CATEGORIES=	net lang
PKGNAMESUFFIX=	-python

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	python binding for libproxy

LIB_DEPENDS=	proxy.1:${PORTSDIR}/net/libproxy

MASTERDIR=	${.CURDIR}/../libproxy
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist
USE_PYTHON=	2.5+

LIBPROXY_SLAVE=	python

do-build:
# empty	

post-build:
	${PYTHON_CMD} -Qold ${PYTHON_LIBDIR}/compileall.py \
		${WRKSRC}/bindings/python
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		${WRKSRC}/bindings/python

do-install:
.for file in libproxy.py libproxy.pyc libproxy.pyo
	${INSTALL_DATA} ${WRKSRC}/bindings/python/${file} \
		${PYTHON_SITELIBDIR}
.endfor

.include "${MASTERDIR}/Makefile"
