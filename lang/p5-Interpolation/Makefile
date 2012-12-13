# New ports collection makefile for:	lang/p5-Interpolation
# Date created:				08 December 2005
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/lang/p5-Interpolation/Makefile,v 1.12 2012/11/17 05:58:54 svnexp Exp $
#

PORTNAME=	Interpolation
PORTVERSION=	0.74
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JENDA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implement arbitrary string interpolation semantics for Perl

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Interpolation.3

.include <bsd.port.mk>
