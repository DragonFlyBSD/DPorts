# Created by: buganini@gmail.com
# $FreeBSD: converters/rubygem-bsdconv/Makefile 317064 2013-05-01 23:19:46Z bdrewery $

PORTNAME=	bsdconv
PORTVERSION=	10.0.0
CATEGORIES=	converters rubygems
MASTER_SITES=	RG
DISTNAME=	ruby-${PORTNAME}-${PORTVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	Ruby wrapper for bsdconv

LICENSE=	BSD

LIB_DEPENDS=	bsdconv:${PORTSDIR}/converters/bsdconv

CONFIGURE_ARGS+=--with-bsdconv-dir=${LOCALBASE}

GEM_NAME=	${DISTNAME}

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
