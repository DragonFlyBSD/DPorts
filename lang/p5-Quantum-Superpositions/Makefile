# New ports collection makefile for:	p5-Quantum-Superpositions
# Date created:				01 Jun 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/lang/p5-Quantum-Superpositions/Makefile,v 1.7 2012/11/17 05:58:54 svnexp Exp $
#

PORTNAME=	Quantum-Superpositions
PORTVERSION=	2.02
CATEGORIES=	lang science perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	QM-like superpositions in Perl

BUILD_DEPENDS=	p5-Class-Multimethods>=0:${PORTSDIR}/devel/p5-Class-Multimethods
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Quantum::Superpositions.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
