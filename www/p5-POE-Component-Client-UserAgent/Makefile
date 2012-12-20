# New ports collection makefile for:	POE-Component-Client-UserAgent
# Date created:		10 Dec 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/p5-POE-Component-Client-UserAgent/Makefile,v 1.14 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	POE-Component-Client-UserAgent
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	LWP and LWP::Parallel based POE component

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-ParallelUA>=0:${PORTSDIR}/www/p5-ParallelUA
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Component::Client::UserAgent.3

.include <bsd.port.mk>
