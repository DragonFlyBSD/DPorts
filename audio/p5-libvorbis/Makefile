# Created by: Dominic Mitchell <dom@happygiraffe.net>
# $FreeBSD: audio/p5-libvorbis/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	libvorbis
PORTVERSION=	0.05
PORTREVISION=	4
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FOOF
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-perl-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Ogg Vorbis streams

LIB_DEPENDS=	vorbis.4:${PORTSDIR}/audio/libvorbis


USES=		perl5
USE_PERL5=	configure

MAN3=		Ogg::Vorbis.3

post-extract:
	@${RM} -rf ${WRKSRC}/blib ${WRKSRC}/pm_to_blib

post-patch:
	@${REINPLACE_CMD} -e 's,%%PREFIX%%,${PREFIX},g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
