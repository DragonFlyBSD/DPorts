# Created by: joseph@randomnetworks.com
# $FreeBSD: sysutils/adtool/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	adtool
PORTVERSION=	1.3.3
CATEGORIES=	sysutils
MASTER_SITES=	http://gp2x.org/adtool/

MAINTAINER=	joseph@randomnetworks.com
COMMENT=	Active Directory administration tool

USE_GMAKE=	yes
USE_OPENLDAP=	yes
USE_AUTOTOOLS=	libtool

CONFIGURE_ARGS+=--with-ldap=${LOCALBASE}

MAN1=		adtool.1

PLIST_FILES=	bin/adtool \
		etc/adtool.cfg.dist

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

NO_STAGE=	yes
.include <bsd.port.mk>
