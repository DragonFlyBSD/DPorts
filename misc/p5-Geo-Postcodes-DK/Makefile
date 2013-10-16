# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: misc/p5-Geo-Postcodes-DK/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	Geo-Postcodes-DK
PORTVERSION=	0.32
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Danish postcodes with associated information

BUILD_DEPENDS=	p5-Geo-Postcodes>=0.31:${PORTSDIR}/misc/p5-Geo-Postcodes
RUN_DEPENDS=	p5-Geo-Postcodes>=0.31:${PORTSDIR}/misc/p5-Geo-Postcodes

USES=		perl5
USE_PERL5=	configure

MAN3=		Geo::Postcodes::DK.3

NO_STAGE=	yes
.include <bsd.port.mk>
