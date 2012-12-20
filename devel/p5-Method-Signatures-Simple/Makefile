# New ports collection makefile for:	p5-Method-Signatures-Simple
# Date created:		2010-10-08
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Method-Signatures-Simple/Makefile,v 1.6 2012/11/17 05:56:21 svnexp Exp $
#

PORTNAME=	Method-Signatures-Simple
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RHESA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Basic method declarations with signatures, without source filters

BUILD_DEPENDS=	p5-Devel-Declare>=0:${PORTSDIR}/devel/p5-Devel-Declare
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Method::Signatures::Simple.3

.include <bsd.port.mk>
