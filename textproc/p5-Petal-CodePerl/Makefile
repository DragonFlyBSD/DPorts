# New ports collection makefile for:	p5-Petal-CodePerl
# Date created:				26 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Petal-CodePerl/Makefile,v 1.8 2012/11/17 06:02:06 svnexp Exp $
#

PORTNAME=	Petal-CodePerl
PORTVERSION=	0.06
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FDALY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make Petal go faster by compiling the expressions

BUILD_DEPENDS=	p5-Petal>=0:${PORTSDIR}/textproc/p5-Petal \
		p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent \
		p5-Code-Perl>=0:${PORTSDIR}/devel/p5-Code-Perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Petal::CodePerl.3 Petal::CodePerl::Expr.3 \
	Petal::CodePerl::Modifiers.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
