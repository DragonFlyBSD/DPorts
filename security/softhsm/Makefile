# Created by: Jaap Akkerhuis <jaap@NLnetLabs.nl>
# $FreeBSD: security/softhsm/Makefile 329006 2013-10-01 22:24:38Z wg $

PORTNAME=	softhsm
PORTVERSION=	1.3.5
CATEGORIES=	security
MASTER_SITES=	http://dist.opendnssec.org/source/

MAINTAINER=	jaap@NLnetLabs.nl
COMMENT=	Software implementation of a Hardware Security Module (HSM)

LIB_DEPENDS=	libbotan.so:${PORTSDIR}/security/botan \
		libsqlite3.so:${PORTSDIR}/databases/sqlite3

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-botan=${LOCALBASE} --with-sqlite3=${LOCALBASE}

USE_LDCONFIG=	yes

.include <bsd.port.mk>
