# New ports collection makefile for:	AI-Perceptron
# Date created:				04 Nov 2000
# Whom:					will
#
# $FreeBSD: ports/math/p5-AI-Perceptron/Makefile,v 1.14 2012/11/17 05:59:25 svnexp Exp $
#

PORTNAME=	AI-Perceptron
PORTVERSION=	1.0
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module for introducing to internal operations of neural networks

BUILD_DEPENDS=	p5-accessors>=0:${PORTSDIR}/devel/p5-accessors
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		AI::Perceptron.3

.include <bsd.port.mk>
