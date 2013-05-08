# Created by: Cristiano Rolim Pereira <cristianorolim@hotmail.com>
# $FreeBSD: sysutils/rsyslog6-gnutls/Makefile 317220 2013-05-03 16:36:39Z ehaupt $

PORTREVISION=	2

COMMENT=	GNUTLS module for rsyslog
MASTERDIR=	${.CURDIR}/../rsyslog6

MNAME=	gnutls
LIB_DEPENDS+=	gnutls.26:${PORTSDIR}/security/gnutls \
		gcrypt:${PORTSDIR}/security/libgcrypt

USES=		pkgconfig

CONFIGURE_ARGS+=--enable-gnutls

PLIST_FILES+=	lib/rsyslog/lmnsd_gtls.la \
		lib/rsyslog/lmnsd_gtls.so

do-install:
	@${INSTALL_PROGRAM} \
		${WRKSRC}/runtime/.libs/lmnsd_gtls.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/runtime/lmnsd_gtls.la ${PREFIX}/lib/rsyslog
.include "${MASTERDIR}/Makefile"
