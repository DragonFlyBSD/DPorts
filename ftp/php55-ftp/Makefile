# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: ftp/php55-ftp/Makefile 340722 2014-01-22 17:00:46Z mat $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php55

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
