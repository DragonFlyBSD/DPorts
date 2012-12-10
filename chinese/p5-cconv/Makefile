# New ports collection makefile for:	p5-cconv
# Date created:		2011-04-28
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/chinese/p5-cconv/Makefile,v 1.3 2012/11/17 05:54:58 svnexp Exp $
#

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
PERL_CONFIGURE=	yes

MAN3=		${PORTNAME}.3

.include <bsd.port.mk>
