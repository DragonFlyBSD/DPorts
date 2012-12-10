# New ports collection makefile for:	lang/p5-Switch
# Date created:				26 April 2001
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/lang/p5-Switch/Makefile,v 1.23 2012/11/17 05:58:54 svnexp Exp $
#

PORTNAME=	Switch
PORTVERSION=	2.16
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RGARCIA
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Switch - A switch statement for Perl

BUILD_DEPENDS=	p5-Filter>0:${PORTSDIR}/devel/p5-Filter
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Switch.3

.include <bsd.port.mk>
