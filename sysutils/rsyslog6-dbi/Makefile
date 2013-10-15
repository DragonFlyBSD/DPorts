# Created by: Cristiano Rolim Pereira <cristianorolim@hotmail.com>
# $FreeBSD: sysutils/rsyslog6-dbi/Makefile 327772 2013-09-20 23:05:58Z bapt $

COMMENT=	LibDBI output module for rsyslog
MASTERDIR=	${.CURDIR}/../rsyslog6

MNAME=	libdbi
LIB_DEPENDS=	dbi.1:${PORTSDIR}/databases/libdbi

CONFIGURE_ARGS+=--enable-libdbi

PLIST_FILES+=	lib/rsyslog/omlibdbi.la \
		lib/rsyslog/omlibdbi.so

NO_STAGE=	yes
do-install:
	@${INSTALL_PROGRAM} \
		${WRKSRC}/plugins/omlibdbi/.libs/omlibdbi.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/plugins/omlibdbi/omlibdbi.la ${PREFIX}/lib/rsyslog

.include "${MASTERDIR}/Makefile"
