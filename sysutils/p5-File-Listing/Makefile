# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: sysutils/p5-File-Listing/Makefile 324174 2013-08-02 18:52:07Z mat $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		File::Listing.3

.include <bsd.port.mk>
