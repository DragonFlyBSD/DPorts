# Created by: Dereckson <dereckson@gmail.com>
# $FreeBSD: textproc/p5-Text-CSV-Encoded/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-CSV-Encoded
PORTVERSION=	0.10
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dereckson@gmail.com
COMMENT=	Perl module for Encoding aware CVS files parsing

BUILD_DEPENDS=	p5-IO>=0:${PORTSDIR}/devel/p5-IO \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple \
		p5-Test-Harness>=0:${PORTSDIR}/devel/p5-Test-Harness \
		p5-Text-CSV>=0:${PORTSDIR}/textproc/p5-Text-CSV
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Text::CSV::Encoded.3 Text::CSV::Encoded::Coder::Base.3 Text::CSV::Encoded::Coder::Encode.3 Text::CSV::Encoded::Coder::EncodeGuess.3

NO_STAGE=	yes
.include <bsd.port.mk>
