# Created by: Dominic Mitchell <dom@happygiraffe.net>
# $FreeBSD: audio/p5-Audio-Wav/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Audio-Wav
PORTVERSION=	0.13
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl modules for reading and writing Microsoft WAV files

BUILD_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Audio::Wav.3 Audio::Wav::Read.3 Audio::Wav::Write.3

.include <bsd.port.mk>
