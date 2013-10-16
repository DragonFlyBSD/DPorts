# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: www/p5-WebService-MoviePosterDB/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WebService-MoviePosterDB
PORTVERSION=	0.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl interface to MoviePosterDB

RUN_DEPENDS=	p5-Cache-Cache>=0:${PORTSDIR}/devel/p5-Cache-Cache \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		WebService::MoviePosterDB.3 \
		WebService::MoviePosterDB::Movie.3 \
		WebService::MoviePosterDB::Poster.3

NO_STAGE=	yes
.include <bsd.port.mk>
