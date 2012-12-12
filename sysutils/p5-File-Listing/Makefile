# New ports collection makefile for:	p5-File-Listing
# Date created:				2011-04-14
# Whom:					Frederic Culot <culot@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/p5-File-Listing/Makefile,v 1.5 2012/11/17 06:01:39 svnexp Exp $
#

PORTNAME=	File-Listing
PORTVERSION=	6.04
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse directory listings

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-HTTP-Date>=6:${PORTSDIR}/www/p5-HTTP-Date
BUILD_DEPENDS:=	${RUN_DEPENDS}

CONFLICTS=	p5-libwww-5*

PERL_CONFIGURE=	yes

MAN3=		File::Listing.3

.include <bsd.port.mk>
