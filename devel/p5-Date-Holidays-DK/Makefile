# New ports collection makefile for:	devel/p5-Date-Holidays-DK
# Date created:				28 October 2005
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Date-Holidays-DK/Makefile,v 1.7 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	Date-Holidays-DK
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Determine Danish public holidays

BUILD_DEPENDS=	p5-Date-Simple>=0:${PORTSDIR}/devel/p5-Date-Simple \
		p5-Date-Easter>=0:${PORTSDIR}/devel/p5-Date-Easter
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Date::Holidays::DK.3

.include <bsd.port.mk>
