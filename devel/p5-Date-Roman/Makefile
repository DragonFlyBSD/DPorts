# New ports collection makefile for:	p5-Date-Roman
# Date created:				16 January 2003
# Whom:	      				Philip Paeps <philip@paeps.cx>
#
# $FreeBSD: ports/devel/p5-Date-Roman/Makefile,v 1.10 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	Date-Roman
PORTVERSION=	1.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	philip@FreeBSD.org
COMMENT=	Perl module to play with Roman dates

BUILD_DEPENDS=	p5-Roman>=0:${PORTSDIR}/math/p5-Roman
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Date::Roman.3

.include <bsd.port.mk>
