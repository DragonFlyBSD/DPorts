# Created by: buganini@gmail.com
# $FreeBSD: converters/rubygem-bsdconv/Makefile 327830 2013-09-21 15:42:02Z sunpoet $

PORTNAME=	bsdconv
PORTVERSION=	11.1.0
CATEGORIES=	converters rubygems
MASTER_SITES=	RG
DISTNAME=	ruby-${PORTNAME}-${PORTVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	Ruby wrapper for bsdconv

LICENSE=	BSD

LIB_DEPENDS=	libbsdconv.so:${PORTSDIR}/converters/bsdconv

CONFIGURE_ARGS+=--with-bsdconv-dir=${LOCALBASE}

GEM_NAME=	${DISTNAME}

NO_STAGE=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
