# Created by: buganini@gmail.com
# $FreeBSD: converters/rubygem-bsdconv/Makefile 340899 2014-01-24 14:45:58Z miwi $

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

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
