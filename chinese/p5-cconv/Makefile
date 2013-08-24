# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: chinese/p5-cconv/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	cconv
PORTVERSION=	0.6.1
CATEGORIES=	chinese converters perl5
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-perl-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl wrapper for chinese/cconv

LIB_DEPENDS=	cconv:${PORTSDIR}/chinese/cconv

CFLAGS+=	-I${LOCALBASE}/include
USE_PERL5=	configure
USES=		perl5

MAN3=		${PORTNAME}.3

.include <bsd.port.mk>
