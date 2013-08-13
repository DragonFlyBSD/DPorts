# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: net/p5-Filesys-SmbClient/Makefile 323711 2013-07-26 10:46:37Z az $

PORTNAME=	Filesys-SmbClient
PORTVERSION=	3.2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anders@FreeBSD.org
COMMENT=	Interface for access Samba filesystem with libsmclient.so

LIB_DEPENDS=	smbclient.0:${PORTSDIR}/net/samba-libsmbclient
BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=		Filesys::SmbClient.3

post-patch:
	@${REINPLACE_CMD} -i '' -e 's!%%LOCALBASE%%!${LOCALBASE}!g' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
