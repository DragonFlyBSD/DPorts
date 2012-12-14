# New ports collection makefile for:	Mail-Freshmeat
# Date created:				Wed Jan  3 14:42:56 2001
# Whom:					will
#
# $FreeBSD: ports/mail/p5-Mail-Freshmeat/Makefile,v 1.15 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	Mail-Freshmeat
PORTVERSION=	1.20
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to parse daily newsletters from freshmeat.net

BUILD_DEPENDS=	p5-Mail-Tools>=0:${PORTSDIR}/mail/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Freshmeat.3

.include <bsd.port.mk>
