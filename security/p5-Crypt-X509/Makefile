# Created by: Gabor Kovesdan
# $FreeBSD: security/p5-Crypt-X509/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt-X509
PORTVERSION=	0.51
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension to parse X.509 certificates

BUILD_DEPENDS=	p5-Convert-ASN1>=0:${PORTSDIR}/converters/p5-Convert-ASN1

USES=		perl5
USE_PERL5=	configure

MAN3=		Crypt::X509.3

NO_STAGE=	yes
.include <bsd.port.mk>
