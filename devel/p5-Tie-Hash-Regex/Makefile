# New ports collection makefile for:	p5-Tie-Hash-Regex
# Date created:				01 Jan 2007
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Tie-Hash-Regex/Makefile,v 1.7 2012/11/17 05:56:35 svnexp Exp $
#

PORTNAME=	Tie-Hash-Regex
PORTVERSION=	1.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Match hash keys using Regular Expressions

BUILD_DEPENDS=	p5-Attribute-Handlers>=0.76:${PORTSDIR}/devel/p5-Attribute-Handlers
RUN_DEPENDS=	p5-Attribute-Handlers>=0.76:${PORTSDIR}/devel/p5-Attribute-Handlers

MAN3=	Tie::Hash::Regex.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
