# $FreeBSD: security/p5-Net-SAML/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Net-SAML
PORTVERSION=	1.11
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	http://zxid.org/ \
		CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	zxid-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for using SAML SSO

LICENSE=	AL2

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl \
		zxid:${PORTSDIR}/security/zxid

USES=		perl5
USE_PERL5=	configure
WRKSRC=		${WRKDIR}/${DISTNAME}/Net

MAN3=		Net::SAML.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|/apps/openssl/std|${LOCALBASE}|' ${WRKSRC}/Makefile.PL

post-install:
.if !defined(NOPORTEXAMPLES)
	${MKDIR} ${EXAMPLESDIR}/
	cd ${WRKSRC}/../ && ${INSTALL_SCRIPT} zxid.pl zxidhlo.pl ${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
