# New ports collection makefile for:	p5-Tie-TinyURL
# Date created:				2008/01/26
# Whom:					chinsan
#
# $FreeBSD: ports/www/p5-Tie-TinyURL/Makefile,v 1.5 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Tie-TinyURL
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tied interface to TinyURL.com

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		Tie::TinyURL.3

PERL_MODBUILD=	yes

.include <bsd.port.mk>
