# New ports collection makefile for:	devel/p5-Carp-Clan-Share
# Date created:				19 October 2009
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Carp-Clan-Share/Makefile,v 1.3 2012/11/17 05:56:06 svnexp Exp $
#

PORTNAME=	Carp-Clan-Share
PORTVERSION=	0.013
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Carp
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Share your Carp::Clan settings with your whole Clan

BUILD_DEPENDS=	p5-Carp-Clan>=0:${PORTSDIR}/devel/p5-Carp-Clan
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Carp::Clan::Share.3

.include <bsd.port.mk>
