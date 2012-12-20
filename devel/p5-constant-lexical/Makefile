# New ports collection makefile for:	p5-constant-lexical
# Date created:		2008-11-16
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-constant-lexical/Makefile,v 1.6 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	constant-lexical
PORTVERSION=	2.0001
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SPROUT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl pragma to declare lexical compile-time constants

BUILD_DEPENDS=	p5-Sub-Delete>=0:${PORTSDIR}/devel/p5-Sub-Delete \
		p5-Lexical-Var>=0:${PORTSDIR}/devel/p5-Lexical-Var
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		constant::lexical.3

.include <bsd.port.mk>
